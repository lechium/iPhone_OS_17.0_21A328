//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFSoftwareVersion.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDAccessoryVersion : HMFSoftwareVersion
{
    NSString *_rawVersionString;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000896f3c
- (void).cxx_destruct;	// IMP=0x0000000000896f29
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000896eb5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000896e1a
@property(readonly, copy, nonatomic) NSString *rawVersionString; // @synthesize rawVersionString=_rawVersionString;
- (id)initWithVersionString:(id)arg1;	// IMP=0x0000000000896ca8

@end

