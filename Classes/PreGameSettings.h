/**
 @class PreGameSettings
 @file PreGameSettings.h
 @author Chris Hamant
 
 Controller class for view that lets users set their name/token before game starts.
 */

#import <UIKit/UIKit.h>
#import "Player.h"

@protocol PreGameDelegate;

@interface PreGameSettings : UIViewController {
	NSArray* players;
	id <PreGameDelegate> delegate;
	UITextField* p1;
	UITextField* p2;
	UITextField* p3;
	UITextField* p4;
}

@property (nonatomic, assign) id <PreGameDelegate> delegate;
@property(retain,nonatomic) NSArray* players;

- (IBAction)done;
- (IBAction)showHideFields:(id)sender;

@end

@protocol PreGameDelegate
- (void)flipsideViewControllerDidFinish:(PreGameSettings*)controller;
@end

