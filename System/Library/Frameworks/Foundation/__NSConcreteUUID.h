//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface __NSConcreteUUID
{
    MISSING_TYPE *_storage;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000034bd80
@property(nonatomic, readonly) Class classForCoder;
@property(nonatomic, readonly) NSString *debugDescription;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSString *UUIDString;
- (void)getUUIDBytes:(char *)arg1;	// IMP=0x000000000034cc10
- (id)initWithUUIDBytes:(const char *)arg1;	// IMP=0x000000000034cba0
- (id)initWithUUIDString:(id)arg1;	// IMP=0x000000000034cb20
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000034c940
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000034c880
- (id)init;	// IMP=0x000000000034bd60

@end

