//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CRLiOSCardPresentationConfiguration : NSObject
{
    _Bool _wantsHalfHeight;	// 8 = 0x8
    _Bool _wantsCardAppearanceInCompactHeight;	// 9 = 0x9
    _Bool _wantsGrabber;	// 10 = 0xa
    _Bool _wantsFloatingCardInRegularWidth;	// 11 = 0xb
    _Bool _overridesHeightWithFullScreen;	// 12 = 0xc
    _Bool _needsFullHeightWhenEditing;	// 13 = 0xd
    _Bool _needsFullHeightDetent;	// 14 = 0xe
    long long _floatingCardAnchor;	// 16 = 0x10
    long long _indexOfCurrentDetent;	// 24 = 0x18
    NSArray *_passthroughViews;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000003415ca
@property(copy, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property(nonatomic) _Bool needsFullHeightDetent; // @synthesize needsFullHeightDetent=_needsFullHeightDetent;
@property(nonatomic) _Bool needsFullHeightWhenEditing; // @synthesize needsFullHeightWhenEditing=_needsFullHeightWhenEditing;
@property(nonatomic) _Bool overridesHeightWithFullScreen; // @synthesize overridesHeightWithFullScreen=_overridesHeightWithFullScreen;
@property(nonatomic) long long indexOfCurrentDetent; // @synthesize indexOfCurrentDetent=_indexOfCurrentDetent;
@property(nonatomic) long long floatingCardAnchor; // @synthesize floatingCardAnchor=_floatingCardAnchor;
@property(nonatomic) _Bool wantsFloatingCardInRegularWidth; // @synthesize wantsFloatingCardInRegularWidth=_wantsFloatingCardInRegularWidth;
@property(nonatomic) _Bool wantsGrabber; // @synthesize wantsGrabber=_wantsGrabber;
@property(nonatomic) _Bool wantsCardAppearanceInCompactHeight; // @synthesize wantsCardAppearanceInCompactHeight=_wantsCardAppearanceInCompactHeight;
@property(nonatomic) _Bool wantsHalfHeight; // @synthesize wantsHalfHeight=_wantsHalfHeight;

@end
