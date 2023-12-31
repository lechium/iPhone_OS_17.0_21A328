//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKKSListenerCollection;
@protocol OTAuthKitAdapterNotifier;

@interface OTAuthKitActualAdapter : NSObject
{
    CKKSListenerCollection<OTAuthKitAdapterNotifier> *_notifiers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000157fc9
@property(retain) CKKSListenerCollection<OTAuthKitAdapterNotifier> *notifiers; // @synthesize notifiers=_notifiers;
- (void)deliverAKDeviceListDeltaMessagePayload:(id)arg1;	// IMP=0x0010000000157e30
- (void)notifyAKDeviceList:(id)arg1;	// IMP=0x0010000000157d5f
- (void)registerNotification:(id)arg1;	// IMP=0x0010000000157c30
- (void)fetchCurrentDeviceListByAltDSID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000157935
- (id)machineID:(id *)arg1;	// IMP=0x0010000000157617
- (_Bool)accountIsDemoAccountByAltDSID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001574f2
- (_Bool)accountIsCDPCapableByAltDSID:(id)arg1;	// IMP=0x00100000001572e8

@end

