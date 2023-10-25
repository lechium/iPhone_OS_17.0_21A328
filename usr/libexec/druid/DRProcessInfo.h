//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DRProcessInfo : NSObject
{
    _Bool _isAnotherDevice;	// 8 = 0x8
    NSString *_teamID;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    CDStruct_4c969caf _auditToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000004434
@property(nonatomic) _Bool isAnotherDevice; // @synthesize isAnotherDevice=_isAnotherDevice;
@property(nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(readonly, nonatomic) _Bool isAppleProcess;
- (_Bool)isSameProcessAsSource:(id)arg1;	// IMP=0x00100000000042df
- (_Bool)isSameTeamAsSource:(id)arg1;	// IMP=0x00100000000041ec
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x00100000000040ca

@end
