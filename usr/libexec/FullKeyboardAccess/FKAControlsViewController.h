//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class FKAActionManager;

@interface FKAControlsViewController : UIViewController
{
    FKAActionManager *_actionManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000080a2
@property(retain, nonatomic) FKAActionManager *actionManager; // @synthesize actionManager=_actionManager;
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000008075
- (id)_addButtonWithTitle:(id)arg1 action:(SEL)arg2 toView:(id)arg3;	// IMP=0x0010000000007f49
- (void)loadView;	// IMP=0x0010000000007490
- (id)init;	// IMP=0x0010000000007425

@end
