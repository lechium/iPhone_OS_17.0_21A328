//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@protocol UIWebFormControl;

__attribute__((visibility("hidden")))
@interface UIWebDateTimePopoverViewController : UIViewController
{
    id <UIWebFormControl> _innerWebDateTimeControl;	// 8 = 0x8
}

@property(retain, nonatomic) id <UIWebFormControl> _innerWebDateTimeControl; // @synthesize _innerWebDateTimeControl;
- (void)loadView;	// IMP=0x0000000000878b48
- (void)dealloc;	// IMP=0x0000000000878b08
- (id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2;	// IMP=0x0000000000878a7c

@end

