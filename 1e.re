alphabet: {a, b, #}

( (a|b|())*((a|b)(a|b)(a|b)(a|b)(a|b))*#(a|b|())* ) | ( (a|b|())*((a|b)(a|b)(a|b)(a|b))*#(a|b|())*(a|b) ) | ( (a|b|())*((a|b)(a|b)(a|b))*#(a|b|())*((a|b)(a|b))* ) | ( (a|b|())*((a|b)(a|b))*#(a|b|())*((a|b)(a|b)(a|b))* ) | ( (a|b|())*(a|b)#(a|b|())*((a|b)(a|b)(a|b)(a|b))* ) | ( (a|b|())*#(a|b|())*((a|b)(a|b)(a|b)(a|b)(a|b))* ) 