//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLLocation, NSString;

@interface UserLocationSearchResult
{
    double _reverseGeocodeUpdateTime;	// 232 = 0xe8
    struct CLLocationCoordinate2D _reverseGeocodeCoordinate;	// 240 = 0xf0
    double _reverseGeocodeAccuracy;	// 256 = 0x100
    _Bool _selected;	// 264 = 0x108
    CLLocation *_location;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x0020000000463220
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void)locationManagerApprovalDidChange:(id)arg1;	// IMP=0x00100000004630da
- (void)setReverseGeocoded:(_Bool)arg1;	// IMP=0x0010000000463044
- (_Bool)needsReverseGeocodeCheck;	// IMP=0x001000000046302f
- (void)_updateFloorOrdinal:(int)arg1;	// IMP=0x0010000000463005
- (double)accuracy;	// IMP=0x0010000000462e8c
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x0010000000462d69
- (id)init;	// IMP=0x0010000000462c2f

// Remaining properties
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long representation;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

