using system;

namespace Bulldozer
{
    class MainClass
    {
        public static void Main (string[] args)
        {
        
        }
    }
    
    public class FactoryWorker
    {
        public FactoryWorker(){
            
        }
        
        public void count (int number){
            if(Total==null)
                Total = 0;
                
            Total = Total + number;
        }
        
        public int  Total {get: set:}
    }
}