//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreRoutine/RTVisit.h>

@class NSString;

@interface RTVisit (RTCoreDataTransformable)
+ (id)createWithVisitMO:(id)arg1;	// IMP=0x0010000000066249
+ (id)createWithManagedObject:(id)arg1;	// IMP=0x00100000000660d2
- (id)managedObjectWithContext:(id)arg1;	// IMP=0x00100000000666c6
- (id)initWithDefaultsDictionanry:(id)arg1;	// IMP=0x00100000003784c7
- (id)initWithLearnedVisit:(id)arg1;	// IMP=0x0010000000426872

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
