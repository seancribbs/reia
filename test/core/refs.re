module PlusTwoModule
  def calc(n)
    n + 2
  end
end

class PlusTwoClass
  def calc(n)
    n + 2
  end
end

module RefsTest
  def run
    [module_test(), class_test()]
  end
  
  # generate for module functions
  def standalone_test
    TestHelper.expect("Refs", "generate for module functions") do
      ref = PlusTwoModule.calc
      (42, ref(40))
    end
  end
end