//
//  iDecideViewController.h
//  iDecide
//
//  Created by Wesley Gorman on 25/07/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface iDecideViewController : UIViewController {
    UILabel *decisionText_;
}

@property (retain, nonatomic) IBOutlet UILabel *decisionText;

-(IBAction)buttonPressed:(id)sender;
@end
