//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSMutableArray, NSString, VOTElement;
@protocol VOTRotorDelegate;

@interface VOTRotor : NSObject
{
    NSString *_typeKey;	// 8 = 0x8
    struct __CFArray *_currentRotors;	// 16 = 0x10
    long long _currentRotorType;	// 24 = 0x18
    long long _currentSelectionRotorType;	// 32 = 0x20
    NSArray *_customRotorActionCategories;	// 40 = 0x28
    NSArray *_customContent;	// 48 = 0x30
    long long _customContentIndex;	// 56 = 0x38
    long long _publicCustomRotorIndex;	// 64 = 0x40
    NSMutableArray *_customPublicRotors;	// 72 = 0x48
    long long _customRotorIndex;	// 80 = 0x50
    VOTElement *_currentRotorElement;	// 88 = 0x58
    id <VOTRotorDelegate> _delegate;	// 96 = 0x60
    long long _customActionIndex;	// 104 = 0x68
}

+ (_Bool)rotorIsUsedForSettingAdjustment:(long long)arg1;	// IMP=0x00400000001244fa
+ (id)stringForRotorType:(long long)arg1;	// IMP=0x0010000000123e79
+ (id)rotorTypeForPreferenceString:(id)arg1;	// IMP=0x001000000012335b
+ (long long)rotorTypeForSystemRotorType:(id)arg1;	// IMP=0x0010000000122f76
+ (long long)rotorTypeForSearchType:(long long)arg1;	// IMP=0x0010000000122f1c
+ (id)systemRotorTypeForRotorType:(long long)arg1;	// IMP=0x0010000000122d53
+ (id)systemRotorTypeForSearchType:(long long)arg1;	// IMP=0x0010000000122d34
- (void).cxx_destruct;	// IMP=0x00200000001246f2
@property(nonatomic) long long customActionIndex; // @synthesize customActionIndex=_customActionIndex;
@property(readonly, nonatomic) long long publicCustomRotorIndex; // @synthesize publicCustomRotorIndex=_publicCustomRotorIndex;
@property(nonatomic) __weak id <VOTRotorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak VOTElement *currentRotorElement; // @synthesize currentRotorElement=_currentRotorElement;
@property(readonly, nonatomic) long long customRotorIndex; // @synthesize customRotorIndex=_customRotorIndex;
- (void)setRotorItems:(id)arg1;	// IMP=0x0010000000124471
- (id)rotorItems;	// IMP=0x00100000001243fd
- (id)currentRotorString;	// IMP=0x0010000000124393
- (id)currentRotorHint;	// IMP=0x0010000000124341
- (_Bool)inMisspelledWordRotor;	// IMP=0x00100000001240df
- (id)_currentCustomRotorString;	// IMP=0x0010000000123ea9
- (long long)indexOfRotorItem:(long long)arg1;	// IMP=0x001000000012330b
- (void)clearRotorTypes;	// IMP=0x00100000001232fe
- (_Bool)verifyNoDuplicatesInRotor;	// IMP=0x0010000000123277
- (id)currentVisualRotorString;	// IMP=0x001000000012320d
- (void)decrement:(_Bool *)arg1 userInitiated:(_Bool)arg2 eventOrigin:(long long)arg3;	// IMP=0x0010000000122d17
- (void)increment:(_Bool *)arg1 userInitiated:(_Bool)arg2 eventOrigin:(long long)arg3;	// IMP=0x0010000000122cf7
- (void)_moveRotor:(_Bool)arg1 didWrap:(_Bool *)arg2 userInitiated:(_Bool)arg3 eventOrigin:(long long)arg4;	// IMP=0x001000000012299c
- (id)customPublicRotors;	// IMP=0x001000000012298e
- (_Bool)rotorTypeIsValid:(long long)arg1 eventOrigin:(long long)arg2;	// IMP=0x0010000000122982
@property(readonly, nonatomic) long long currentRotorType; // @synthesize currentRotorType=_currentRotorType;
@property(readonly, nonatomic) long long currentSelectionRotorType; // @dynamic currentSelectionRotorType;
- (void)setCurrentRotorType:(long long)arg1 saveToPreferences:(_Bool)arg2 userInitiated:(_Bool)arg3;	// IMP=0x0010000000122604
- (id)generateRotorTypeRequest;	// IMP=0x001000000012247c
@property(readonly, nonatomic) long long rotorIndex; // @dynamic rotorIndex;
@property(readonly, nonatomic) long long rotorCount; // @dynamic rotorCount;
- (void)dealloc;	// IMP=0x00100000001223d6
- (MISSING_TYPE *)init;	// IMP=0x001000000012235c

@end

