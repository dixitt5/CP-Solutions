class Solution {
    
public  List<List<String>> findDuplicate(String[] paths) {
    
    Map<String, List<String>> map = new HashMap<>();
    for(String path : paths){
      String s[] = path.split(" ");
      for(int i=1; i<s.length; i++){
          String roots[] =  s[i].split("\\(");
          String key = roots[1].replace(")","");
          List<String> l = map.getOrDefault(key, new ArrayList<>());
          String p = s[0] +"/"+ roots[0];
          l.add(p);
          map.put(key,l);

      }
    }
    
    List<List<String>> result = new ArrayList<>();
    for(List<String> l : map.values()){
        if(l.size()>1){
            result.add(l);
        }
    }
    return result;
  }
}
