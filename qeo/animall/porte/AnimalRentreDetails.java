/**************************************************************
 ********          THIS IS A GENERATED FILE         ***********
 **************************************************************/

package qeo.animall.porte;

public class AnimalRentreDetails
{
    /**
     * uuid de la porte.
     */
    public String uuid;

    /**
     * uuid du collier.
     */
    public String uuidCollier;

    /**
     * 
     */
    public String labelPorte;

    /**
     * 
     */
    public String nomAnimal;

    /**
     * 
     */
    public String labelRace;

    public AnimalRentreDetails()
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
        final AnimalRentreDetails myObj = (AnimalRentreDetails)obj;
        if (!uuid.equals(myObj.uuid)) {
            return false;
        }
        if (!uuidCollier.equals(myObj.uuidCollier)) {
            return false;
        }
        if (!labelPorte.equals(myObj.labelPorte)) {
            return false;
        }
        if (!nomAnimal.equals(myObj.nomAnimal)) {
            return false;
        }
        if (!labelRace.equals(myObj.labelRace)) {
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
        result = prime * result + ((labelPorte == null) ? 0 : labelPorte.hashCode());
        result = prime * result + ((nomAnimal == null) ? 0 : nomAnimal.hashCode());
        result = prime * result + ((labelRace == null) ? 0 : labelRace.hashCode());
        return result;
    }
}
