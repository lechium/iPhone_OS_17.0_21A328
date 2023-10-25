//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LAPSPasscodeOptionsViewControllerConfiguration, UIView, UIViewController;
@protocol LAPSPasscodeOptionsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface LAPSPasscodeOptionsPresentationRequest : NSObject
{
    _Bool _animated;	// 8 = 0x8
    UIViewController *_sourceViewController;	// 16 = 0x10
    UIView *_sourceView;	// 24 = 0x18
    LAPSPasscodeOptionsViewControllerConfiguration *_config;	// 32 = 0x20
    id <LAPSPasscodeOptionsViewControllerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000013166
@property(nonatomic) __weak id <LAPSPasscodeOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(retain, nonatomic) LAPSPasscodeOptionsViewControllerConfiguration *config; // @synthesize config=_config;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic) UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
- (id)initWithSourceViewController:(id)arg1;	// IMP=0x0000000000013082

@end
