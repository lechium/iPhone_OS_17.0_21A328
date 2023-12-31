//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOComposedWaypoint.h>

@interface GEOComposedWaypoint (MNExtras)
+ (id)appleParkWaypointFromLatLng;	// IMP=0x0080000000052f4a
+ (id)appleParkWaypointFromAddress;	// IMP=0x0080000000052ed7
+ (id)appleParkWaypointFromMuid;	// IMP=0x0080000000052e64
- (id)humanDescriptionWithAddressAndLatLng;	// IMP=0x0010000000050d92
- (id)humanDescriptionWithLatLng;	// IMP=0x0010000000050c61
- (id)humanDescription;	// IMP=0x0010000000050b3e
- (id)navAnnouncementAddressAndSubstituteType:(int *)arg1;	// IMP=0x00100000000509bd
- (id)navAnnouncementAddress;	// IMP=0x00100000000509a9
- (id)navAnnouncementNameAndSubstituteType:(int *)arg1;	// IMP=0x00100000000507ff
- (id)navAnnouncementName;	// IMP=0x00100000000507eb
- (id)localeIdentifier;	// IMP=0x0010000000050729
- (id)navDisplayNameWithSpecialContacts:(_Bool)arg1 substituteType:(int *)arg2;	// IMP=0x001000000005067c
- (id)navDisplayNameWithSpecialContacts:(_Bool)arg1;	// IMP=0x001000000005062f
- (id)navDisplayNameAndSubstituteType:(int *)arg1;	// IMP=0x00100000000505ad
- (id)navDisplayAddressAndSubstituteType:(int *)arg1;	// IMP=0x0010000000050560
- (id)navDisplayName;	// IMP=0x0010000000050547
- (id)navDisplayAddress;	// IMP=0x00100000000504c6
- (id)directionsListAddress;	// IMP=0x001000000005041b
- (id)bestSpokenName;	// IMP=0x00100000000502e8
- (id)bestDisplayName:(_Bool)arg1;	// IMP=0x001000000005016c
@end

