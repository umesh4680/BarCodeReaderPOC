//
//  ViewController.h
//  BarCodeReaderPOC
//
//  Created by sonora software on 8/26/15.
//  Copyright (c) 2015 sonora software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZBarSDK.h"


@interface ViewController : UIViewController <ZBarReaderDelegate>



@property (weak, nonatomic) IBOutlet UIImageView *resultImage;

@property (weak, nonatomic) IBOutlet UITextView *resultText;

- (IBAction)scanButtonTapped:(id)sender;

@end

