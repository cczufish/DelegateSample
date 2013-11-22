

#import <UIKit/UIKit.h>
#import "UIViewPassValueDelegate.h"
@interface DelegateSampleViewController : UIViewController <UIViewPassValueDelegate>
{
    UITextField *_value;
}
@property(nonatomic, retain) IBOutlet UITextField *value;

- (IBAction)buttonClick:(id)sender;

@end

