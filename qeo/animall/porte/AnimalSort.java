/**************************************************************
 ********          THIS IS A GENERATED FILE         ***********
 **************************************************************/

package qeo.animall.porte;

public class AnimalSort
{
    /**
     * uuid de la porte.
     */
    public String uuid;

    /**
     * uuid du collier.
     */
    public String uuidCollier;

    public AnimalSort()
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
        final AnimalSort myObj = (AnimalSort)obj;
        if (!uuid.equals(myObj.uuid)) {
            return false;
        }
        if (!uuidCollier.equals(myObj.uuidCollier)) {
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
        result = prime * result + ((uuidCollier == null) ? 0 : uuidCollier.hashCode());
        return result;
    }
}
