/**************************************************************
 ********          THIS IS A GENERATED FILE         ***********
 **************************************************************/

package qeo.animall.gamelle;

public class ForceService
{
    /**
     * uuid de la gamelle.
     */
    public String uuidGamelle;

    /**
     * nombre de dose
     */
    public int dose;

    /**
     * timestamp
     */
    public int timestamp;

    public ForceService()
    {
    }

    @Override
    public boolean equals(Object obj)
    {
        if (obj == this) {
            return true;
        }
        if ((obj == null) || (obj.getClass() != this.getClass())) {
            return false;
        }
        final ForceService myObj = (ForceService)obj;
        if (!uuidGamelle.equals(myObj.uuidGamelle)) {
            return false;
        }
        if (dose != myObj.dose) {
            return false;
        }
        if (timestamp != myObj.timestamp) {
            return false;
        }
        return true;
    }

    @Override
    public int hashCode()
    {
        final int prime = 31;
        int result = 1;
        result = prime * result + ((uuidGamelle == null) ? 0 : uuidGamelle.hashCode());
        result = prime * result + dose;
        result = prime * result + timestamp;
        return result;
    }
}
