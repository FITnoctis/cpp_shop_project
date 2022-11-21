#include <iostream>

using namespace std;

void shopBanner();
void exitBanner();

int main()
{
     shopBanner();
    int choice, menu, addMore, sumOfOrders;
    bool quit = false;
    
    do{
    	cout<<"Welcome to KainDerya! Enter the assigned number for our menu."<< endl;
    	cout<<"1. Menudo - P40"<<endl;
    	cout<<"2. Afritada - P50"<<endl;
    	cout<<"3. Adobo - P60"<<endl;
    	cout<<"4. Sinigang - P40"<<endl;
    	cout<<"5. Dinakdakan - P60"<<endl;
    	cout<<"6. Exit"<<endl;
    	cin>>choice;
	
	switch (choice){
		case 1:
			cout<<"Excellent!" <<endl;
            cout<<"How many orders of Menudo would you like to order?"<<endl;
            cin>>menu;
            sumOfOrders += menu * 40;
            
			
			break;
		case 2:
		    cout<<"Excellent!"	<<endl;
            cout<<"How many orders of Afritada would you like to order?"<<endl;
            cin>>menu;
            sumOfOrders += menu * 50;
		    
		    break;
		case 3:
			cout<<"Excellent!" <<endl;
            cout<<"How many orders of Adobo would you like to order?"<<endl;
            cin>>menu;
            sumOfOrders += menu * 60;
			
            
			break;
		case 4:
			cout<<"Excellent!" <<endl;
            cout<<"How many orders of Sinigang would you like to order?"<<endl;
            cin>>menu;
            sumOfOrders += menu * 40;
            
			
           
			break;
		case 5:
			cout<<"Excellent!" <<endl;
            cout<<"How many orders of Dinakdakan would you like to order?"<<endl;
            cin>>menu;
            sumOfOrders += menu * 60;
            
		
            
			break;
		case 6:
            cout<<"Thank you for ordering! Your total is P"<<sumOfOrders<<endl;
            cout<<"Would you like to add more orders? Enter 1 for yes and 2 for no."<<endl;
            cin>>addMore;
            if (addMore == 1){
                shopBanner();
            }
            else{
                quit = true;
            }
			break;
		default:
			cout<<"Bad choice! Please try again!"<<endl;
			
			
		}
	    // try adding a feature where they cann add more from their order
        

				
		
	}

    
    while(quit == false);{
        exitBanner();
    }
                                
    return 0;
	}

void shopBanner()
{
    std::cout << "____    __    ____  _______  __        ______   ______   .___  ___.  _______\n";
    std::cout << "\\   \\  /  \\  /   / |   ____||  |      /      | /  __  \\  |   \\/   | |   ____|\n";
    std::cout << " \\   \\/    \\/   /  |  |__   |  |     |  ,----'|  |  |  | |  \\  /  | |  |__\n";
    std::cout << "  \\            /   |   __|  |  |     |  |     |  |  |  | |  |\\/|  | |   __|\n";
    std::cout << "   \\    /\\    /    |  |____ |  `----.|  `----.|  `--'  | |  |  |  | |  |____\n";
    std::cout << "    \\__/  \\__/     |_______||_______| \\______| \\______/  |__|  |__| |_______|\n\n";

    std::cout << ".___________.  ______      .___________. __    __   _______         _______. __    __    ______   .______\n";
    std::cout << "|           | /  __  \\     |           ||  |  |  | |   ____|       /       ||  |  |  |  /  __  \\  |   _  \\\n";
    std::cout << "`---|  |----`|  |  |  |    `---|  |----`|  |__|  | |  |__         |   (----`|  |__|  | |  |  |  | |  |_)  |\n";
    std::cout << "    |  |     |  |  |  |        |  |     |   __   | |   __|         \\   \\    |   __   | |  |  |  | |   ___/\n";
    std::cout << "    |  |     |  `--'  |        |  |     |  |  |  | |  |____    .----)   |   |  |  |  | |  `--'  | |  |\n";
    std::cout << "    |__|      \\______/         |__|     |__|  |__| |_______|   |_______/    |__|  |__|  \\______/  | _|\n";
}
void exitBanner() {


std::cout << " /$$$$$$$$ /$$                           /$$             /$$     /$$\n";
std::cout << "|__  $$__/| $$                          | $$            |  $$   /$$/\n";
std::cout << "   | $$   | $$$$$$$   /$$$$$$  /$$$$$$$ | $$   /$$       \\  $$ /$$//$$$$$$  /$$   /$$\n";
std::cout << "   | $$   | $$__  $$ |____  $$| $$__  $$| $$  /$$/        \\  $$$$//$$__  $$| $$  | $$\n";
std::cout << "   | $$   | $$  \\ $$  /$$$$$$$| $$  \\ $$| $$$$$$/          \\  $$/| $$  \\ $$| $$  | $$\n";
std::cout << "   | $$   | $$  | $$ /$$__  $$| $$  | $$| $$_  $$           | $$ | $$  | $$| $$  | $$\n";
std::cout << "   | $$   | $$  | $$|  $$$$$$$| $$  | $$| $$ \\  $$          | $$ |  $$$$$$/|  $$$$$$/\n";
std::cout << "   |__/   |__/  |__/ \\_______/|__/  |__/|__/  \\__/          |__/  \\______/  \\______/\n";





}
