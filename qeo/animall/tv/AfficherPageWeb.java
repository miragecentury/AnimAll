/**************************************************************
 ********          THIS IS A GENERATED FILE         ***********
 **************************************************************/

package qeo.animall.tv;

public class AfficherPageWeb
{
    /**
     * 
     */
    public String url;

    /**
     * 
     */
    public String dataPost;

    public AfficherPageWeb()
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
        final AfficherPageWeb myObj = (AfficherPageWeb)obj;
        if (!url.equals(myObj.url)) {
            return false;
        }
        if (!dataPost.equals(myObj.dataPost)) {
            return false;
        }
        return true;
    }

    @Override
    public int hashCode()
    {
        final int prime = 31;
        int result = 1;
        result = prime * result + ((url == null) ? 0 : url.hashCode());
        result = prime * result + ((dataPost == null) ? 0 : dataPost.hashCode());
        return result;
    }
}
