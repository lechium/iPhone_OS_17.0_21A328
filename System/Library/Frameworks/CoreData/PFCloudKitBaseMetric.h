//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PFCloudKitBaseMetric : NSObject
{
    NSString *_containerIdentifier;	// 8 = 0x8
    NSString *_processName;	// 16 = 0x10
}

- (id)description;	// IMP=0x00000000002239b6
@property(readonly, nonatomic) NSDictionary *payload;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;	// IMP=0x0000000000223836
- (id)initWithContainerIdentifier:(id)arg1;	// IMP=0x00000000002237af

@end

