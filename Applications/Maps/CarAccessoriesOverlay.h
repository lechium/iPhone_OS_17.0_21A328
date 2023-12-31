//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarHeadingIndicatorView, CarSpeedSignView, NSString, UIStackView;
@protocol ChromeOverlayHosting, NSObject;

@interface CarAccessoriesOverlay : NSObject
{
    UIStackView *_accessoryStackView;	// 8 = 0x8
    CarHeadingIndicatorView *_headingIndicator;	// 16 = 0x10
    id <NSObject> _headingIndicatorObserver;	// 24 = 0x18
    CarSpeedSignView *_speedSignView;	// 32 = 0x20
    id <NSObject> _speedSignObserver;	// 40 = 0x28
    _Bool _showHeadingIndicator;	// 48 = 0x30
    _Bool _showSpeedSign;	// 49 = 0x31
    _Bool _headingIndicatorIgnoresUserSettings;	// 50 = 0x32
    _Bool _speedSignIgnoresUserSettings;	// 51 = 0x33
    _Bool _ignoresCollisionConstraints;	// 52 = 0x34
    _Bool _userPermitsHeadingIndicator;	// 53 = 0x35
    _Bool _userPermitsSpeedSign;	// 54 = 0x36
    id <ChromeOverlayHosting> _host;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000b66f37
@property(nonatomic) _Bool userPermitsSpeedSign; // @synthesize userPermitsSpeedSign=_userPermitsSpeedSign;
@property(nonatomic) _Bool userPermitsHeadingIndicator; // @synthesize userPermitsHeadingIndicator=_userPermitsHeadingIndicator;
@property(nonatomic) _Bool ignoresCollisionConstraints; // @synthesize ignoresCollisionConstraints=_ignoresCollisionConstraints;
@property(nonatomic) _Bool speedSignIgnoresUserSettings; // @synthesize speedSignIgnoresUserSettings=_speedSignIgnoresUserSettings;
@property(nonatomic) _Bool headingIndicatorIgnoresUserSettings; // @synthesize headingIndicatorIgnoresUserSettings=_headingIndicatorIgnoresUserSettings;
@property(nonatomic) _Bool showSpeedSign; // @synthesize showSpeedSign=_showSpeedSign;
@property(nonatomic) _Bool showHeadingIndicator; // @synthesize showHeadingIndicator=_showHeadingIndicator;
@property(nonatomic) __weak id <ChromeOverlayHosting> host; // @synthesize host=_host;
- (void)valueChangedForGEOConfigKey:(CDStruct_065526f1)arg1;	// IMP=0x0010000000b66e2f
- (void)lightLevelController:(id)arg1 didUpdateLightLevel:(long long)arg2;	// IMP=0x0010000000b66d19
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000b666bf
@property(nonatomic, getter=isHidden) _Bool hidden;
- (void)reloadAnimated:(_Bool)arg1;	// IMP=0x0010000000b64f1b
- (_Bool)_shouldShowSpeedSign;	// IMP=0x0010000000b64ece
- (_Bool)_shouldShowHeadingIndicator;	// IMP=0x0010000000b64e81
- (void)setContentView:(id)arg1 layoutGuide:(id)arg2;	// IMP=0x0010000000b64714
- (id)init;	// IMP=0x0010000000b642ec
- (void)dealloc;	// IMP=0x0010000000b6425e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

