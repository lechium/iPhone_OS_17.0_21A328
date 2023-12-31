//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextView.h>

@protocol AKTextViewKeyCommandDelegate;

@interface AKTextView : UITextView
{
    long long _maximumNumberOfCharacters;	// 8 = 0x8
    id <AKTextViewKeyCommandDelegate> _keyCommandDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009baca
@property __weak id <AKTextViewKeyCommandDelegate> keyCommandDelegate; // @synthesize keyCommandDelegate=_keyCommandDelegate;
@property long long maximumNumberOfCharacters; // @synthesize maximumNumberOfCharacters=_maximumNumberOfCharacters;
- (_Bool)isBlockedAction:(SEL)arg1;	// IMP=0x000000000009ba66
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x000000000009b9ed
- (id)textInputTraits;	// IMP=0x000000000009b9d4
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000009b970
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;	// IMP=0x000000000009b8e7
- (void)handleBackTabCommand:(id)arg1;	// IMP=0x000000000009b899
- (void)handleTabCommand:(id)arg1;	// IMP=0x000000000009b84b
- (id)keyCommands;	// IMP=0x000000000009b75d

@end

