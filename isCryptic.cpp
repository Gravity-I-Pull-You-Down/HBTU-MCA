bool isCryptSolution(std::vector<std::string> crypt, std::vector<std::vector<char>> solution) {
    for(int i = 0; i<crypt.size();++i){
        for(int j = 0; j<crypt[i].size();++j){
            for(int k =0;k<solution.size();++k){

            if(crypt[i][j] == solution[k][0]){
             crypt[i][j] = solution[k][1];   
            }
            }
        }
    if(crypt[i].size()>1 && crypt[i][0]=='0')
        return false;
    }

    cout <<"Reaches Here";

long int w1 = stol(crypt[0]) ,w2 = stol(crypt[1]),w3= stol(crypt[2]);
cout <<w1 <<" " << w2 <<" " << w3<<endl;
if(w1+w2 != w3)
return false;

    

return true;
}
