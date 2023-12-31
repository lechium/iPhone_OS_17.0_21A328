//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIKeyShortcutHUDClientTraits, _UIKeyShortcutHUDModel;

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDConfiguration : NSObject
{
    _Bool _searching;	// 8 = 0x8
    _UIKeyShortcutHUDModel *_model;	// 16 = 0x10
    long long _presentedModifierFlag;	// 24 = 0x18
    long long _initialHeldModifierFlags;	// 32 = 0x20
    _UIKeyShortcutHUDClientTraits *_clientTraits;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000011ee2e9
- (void).cxx_destruct;	// IMP=0x00000000011ee54d
@property(retain, nonatomic) _UIKeyShortcutHUDClientTraits *clientTraits; // @synthesize clientTraits=_clientTraits;
@property(nonatomic) long long initialHeldModifierFlags; // @synthesize initialHeldModifierFlags=_initialHeldModifierFlags;
@property(nonatomic) long long presentedModifierFlag; // @synthesize presentedModifierFlag=_presentedModifierFlag;
@property(nonatomic, getter=isSearching) _Bool searching; // @synthesize searching=_searching;
@property(retain, nonatomic) _UIKeyShortcutHUDModel *model; // @synthesize model=_model;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000011ee3a6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000011ee2f1

@end

