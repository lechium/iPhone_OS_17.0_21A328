//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol _UIFocusSoundPlayer;

__attribute__((visibility("hidden")))
@interface _UIFocusSoundGenerator : NSObject
{
    id <_UIFocusSoundPlayer> _focusSoundPlayer;	// 8 = 0x8
}

+ (void)_uiktest_unregisterURLForIdentifier:(id)arg1;	// IMP=0x006000000083b96b
+ (void)registerURL:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x006000000083b754
+ (id)defaultGenerator;	// IMP=0x006000000083b183
- (void).cxx_destruct;	// IMP=0x000000000083ba4b
@property(readonly, nonatomic) id <_UIFocusSoundPlayer> focusSoundPlayer; // @synthesize focusSoundPlayer=_focusSoundPlayer;
- (void)playSoundForFocusUpdateInContext:(id)arg1;	// IMP=0x000000000083b258
- (id)initWithFocusSoundPlayer:(id)arg1;	// IMP=0x000000000083b1ed

@end
