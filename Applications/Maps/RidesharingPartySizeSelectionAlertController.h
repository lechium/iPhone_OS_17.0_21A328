//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIAlertController.h>

@class RideBookingRequestRideStatus;

@interface RidesharingPartySizeSelectionAlertController : UIAlertController
{
    CDUnknownBlockType _didFinishSelectingPartySize;	// 8 = 0x8
    RideBookingRequestRideStatus *_requestRideStatus;	// 16 = 0x10
}

+ (id)ridesharingPartySizeSelectionAlertControllerWithRequestRideStatus:(id)arg1;	// IMP=0x00400000008f516d
- (void).cxx_destruct;	// IMP=0x00200000008f589a
@property(retain, nonatomic) RideBookingRequestRideStatus *requestRideStatus; // @synthesize requestRideStatus=_requestRideStatus;
@property(copy, nonatomic) CDUnknownBlockType didFinishSelectingPartySize; // @synthesize didFinishSelectingPartySize=_didFinishSelectingPartySize;

@end

