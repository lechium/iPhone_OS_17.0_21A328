//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@interface NSUUID (MSVBase64)
+ (id)msv_uuidWithCFUUID:(struct __CFUUID *)arg1;	// IMP=0x00800000000256a7
+ (id)msv_UUIDWithData:(id)arg1;	// IMP=0x008000000002561e
+ (id)uuidWithMSVBase64UUID:(id)arg1;	// IMP=0x00800000000255cd
- (struct __CFUUID *)msv_copyCFUUID;	// IMP=0x001000000002558d
- (id)msv_UUIDData;	// IMP=0x0010000000025510
- (id)MSVBase64UUIDString;	// IMP=0x001000000002548f
- (id)initWithMSVBase64UUIDString:(id)arg1;	// IMP=0x00100000000253a2
@end

