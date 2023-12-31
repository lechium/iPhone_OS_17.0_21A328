//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VUIUpNextButtonProperties;

__attribute__((visibility("hidden")))
@interface VUIUpNextButton
{
    VUIUpNextButtonProperties *_properties;	// 8 = 0x8
    CDUnknownBlockType _stateDidChangeHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000017efd
@property(copy, nonatomic) CDUnknownBlockType stateDidChangeHandler; // @synthesize stateDidChangeHandler=_stateDidChangeHandler;
@property(retain, nonatomic) VUIUpNextButtonProperties *properties; // @synthesize properties=_properties;
- (id)largeContentTitle;	// IMP=0x0000000000017e13
- (void)updateAccessibilityIdentifierAfterStateChanged;	// IMP=0x0000000000017d4a
- (void)upNextStateChangedToRemoved;	// IMP=0x0000000000017a0a
- (void)upNextStateChangedToAdded;	// IMP=0x00000000000176ca
- (void)setTintColor:(id)arg1;	// IMP=0x00000000000175d0
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000175ae
- (void)selectButtonAction:(id)arg1;	// IMP=0x0000000000017504
- (id)initWithType:(unsigned long long)arg1 interfaceStyle:(unsigned long long)arg2;	// IMP=0x00000000000173c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

