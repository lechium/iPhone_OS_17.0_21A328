//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecord;

__attribute__((visibility("hidden")))
@interface _WBSCKRecordSystemEncoder : NSObject
{
    CKRecord *_record;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000413f1
- (void).cxx_destruct;	// IMP=0x00000000000414b8
@property(readonly, nonatomic) __weak CKRecord *record; // @synthesize record=_record;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000041448
- (Class)classForCoder;	// IMP=0x000000000004140d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000413f9
- (id)initWithRecord:(id)arg1;	// IMP=0x0000000000041376

@end

