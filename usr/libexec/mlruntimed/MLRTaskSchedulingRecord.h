//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DESUserDefaultsStoreRecord, NSDate, NSString;

@interface MLRTaskSchedulingRecord : NSObject
{
    DESUserDefaultsStoreRecord *_storeRecord;	// 8 = 0x8
    NSDate *_lastCompletionDate;	// 16 = 0x10
    NSString *_recordID;	// 24 = 0x18
    long long _performCount;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000eeca
// Error: Property attributes should begin with the type ('T') attribute, property name: performCount
// Property attributes: (null)

@property(readonly, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) NSDate *lastCompletionDate; // @synthesize lastCompletionDate=_lastCompletionDate;
- (_Bool)commitWithError:(id *)arg1;	// IMP=0x001000000000ee55
- (id)description;	// IMP=0x001000000000edd7
- (id)initWithTaskID:(id)arg1;	// IMP=0x001000000000ecd5

@end

