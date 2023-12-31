//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface LUIHomeButtonController : NSObject
{
    _Bool _singleTapActivated;	// 8 = 0x8
    _Bool _doubleTapActivated;	// 9 = 0x9
    _Bool _longPressActivated;	// 10 = 0xa
}

+ (id)sharedController;	// IMP=0x0020000000035f2d
@property(nonatomic) _Bool longPressActivated; // @synthesize longPressActivated=_longPressActivated;
@property(nonatomic) _Bool doubleTapActivated; // @synthesize doubleTapActivated=_doubleTapActivated;
@property(nonatomic) _Bool singleTapActivated; // @synthesize singleTapActivated=_singleTapActivated;
- (void)_tapType:(unsigned long long)arg1 observed:(_Bool)arg2;	// IMP=0x001000000003627d
- (void)deactivateTapType:(unsigned long long)arg1;	// IMP=0x0010000000036269
- (void)activateTapType:(unsigned long long)arg1;	// IMP=0x0010000000036252
- (void)consumeLongPressForButtonKind:(long long)arg1;	// IMP=0x001000000003619d
- (void)consumeDoublePressDownForButtonKind:(long long)arg1;	// IMP=0x00100000000360e8
- (void)consumeSinglePressUpForButtonKind:(long long)arg1;	// IMP=0x0010000000036033
- (id)init;	// IMP=0x0010000000035f82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

