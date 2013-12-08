/**************************************************************
 ********          THIS IS A GENERATED FILE         ***********
 **************************************************************/

package qeo.animall.balance;

/**
 * Change de poid de la gamelle
 */
public class NewWeight
{
    /**
     * uuid de la gamelle.
     */
    public String uuid;

    /**
     * the new poids
     */
    public float weight;

    /**
     * timestamp
     */
    public int timestamp;

    public NewWeight()
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
        final NewWeight myObj = (NewWeight)obj;
        if (!uuid.equals(myObj.uuid)) {
            return false;
        }
        if (weight != myObj.weight) {
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
        result = prime * result + ((uuid == null) ? 0 : uuid.hashCode());
        result = prime * result + Float.floatToIntBits(weight);
        result = prime * result + timestamp;
        return result;
    }
}
