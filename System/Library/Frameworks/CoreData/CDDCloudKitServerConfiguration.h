//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CDDCloudKitServerConfiguration : NSObject
{
    NSString *_storeDirectoryPath;	// 8 = 0x8
    NSString *_machServiceName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001ace13
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001aced1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ace1b
- (id)description;	// IMP=0x00000000001acd7f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001acd00
- (void)dealloc;	// IMP=0x00000000001accb6
- (id)init;	// IMP=0x00000000001acc0a

@end

