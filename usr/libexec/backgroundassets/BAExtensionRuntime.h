//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface BAExtensionRuntime : NSObject
{
    NSDate *_startDate;	// 8 = 0x8
    NSDate *_endDate;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000a4e2
- (void).cxx_destruct;	// IMP=0x002000000000aa1b
@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
- (_Bool)isMoreThan24HoursAgo;	// IMP=0x001000000000a942
- (void)extensionExited;	// IMP=0x001000000000a8ef
@property(readonly) double elapsedTime;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000a731
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000a5ac
- (id);	// IMP=0x001000000000a544
- (id)init;	// IMP=0x001000000000a4ea

@end

