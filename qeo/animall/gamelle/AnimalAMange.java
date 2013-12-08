/**************************************************************
 ********          THIS IS A GENERATED FILE         ***********
 **************************************************************/

package qeo.animall.gamelle;

public class AnimalAMange
{
    /**
     * uuid de la gamelle.
     */
    public String uuidGamelle;

    /**
     * label de la gamellle
     */
    public String labelGamelle;

    /**
     * 
     */
    public String nomAnimal;

    /**
     * 
     */
    public String labelRace;

    /**
     * 
     */
    public String evolutionRepasWeek;

    /**
     * timestamp
     */
    public int timestamp;

    public AnimalAMange()
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
        final AnimalAMange myObj = (AnimalAMange)obj;
        if (!uuidGamelle.equals(myObj.uuidGamelle)) {
            return false;
        }
        if (!labelGamelle.equals(myObj.labelGamelle)) {
            return false;
        }
        if (!nomAnimal.equals(myObj.nomAnimal)) {
            return false;
        }
        if (!labelRace.equals(myObj.labelRace)) {
            return false;
        }
        if (!evolutionRepasWeek.equals(myObj.evolutionRepasWeek)) {
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
        result = prime * result + ((labelGamelle == null) ? 0 : labelGamelle.hashCode());
        result = prime * result + ((nomAnimal == null) ? 0 : nomAnimal.hashCode());
        result = prime * result + ((labelRace == null) ? 0 : labelRace.hashCode());
        result = prime * result + ((evolutionRepasWeek == null) ? 0 : evolutionRepasWeek.hashCode());
        result = prime * result + timestamp;
        return result;
    }
}
