//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMCDUserModel : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x000000000001d1f0

// Remaining properties
@property(nonatomic, copy) NSString *handle; // @dynamic handle;
@property(nonatomic, copy) NSUUID *modelID; // @dynamic modelID;

@end

