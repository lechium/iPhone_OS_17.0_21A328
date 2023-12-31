//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSharedNavState, NSString;

@interface SharedTripUserAnnotation : NSObject
{
    GEOSharedNavState *_state;	// 8 = 0x8
    struct CLLocationCoordinate2D _coordinate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001cbd49
@property(retain, nonatomic) GEOSharedNavState *state; // @synthesize state=_state;
- (_Bool)showsBalloonCallout;	// IMP=0x00100000001cbd26
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x00100000001cbcf9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;

@end

