//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIWindow.h>

@class NSHashTable, NSString;

@interface EventSourceWindow : UIWindow
{
    NSHashTable *_eventTaps;	// 8 = 0x8
    _Bool _hasEventTaps;	// 16 = 0x10
    struct CGRect _keyboardFrame;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000009c70b1
- (void)sendEvent:(id)arg1;	// IMP=0x00100000009c6eff
- (void)registerEventTap:(id)arg1;	// IMP=0x00100000009c6e7a
- (void)_updateAnalyticsState;	// IMP=0x00100000009c6df2
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000009c6c5b
@property(readonly, nonatomic) double keyboardHeight;
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x00100000009c6c0b
- (void);	// IMP=0x00100000009c6b5b
- (void)_commonUpdate;	// IMP=0x00100000009c6a2f
- (id)initWithContentRect:(struct CGRect)arg1;	// IMP=0x00100000009c69d2
- (id)initWithWindowScene:(id)arg1;	// IMP=0x00100000009c6986

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

