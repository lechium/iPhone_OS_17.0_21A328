//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC10CoreAuthUI19TransitionViewModel : NSObject
{
    MISSING_TYPE *delegates;	// 8 = 0x8
    MISSING_TYPE *_connection;	// 0 = 0x0
    MISSING_TYPE *_remoteUIHost;	// 1887007839 = 0x7079745f
    MISSING_TYPE *_mechanism;	// 2 = 0x2
    MISSING_TYPE *_backoffCounter;	// 12014 = 0x2eee
    MISSING_TYPE *_internalInfo;	// 4260 = 0x10a4
    MISSING_TYPE *_controllerToShow;	// 1868783455 = 0x6f635f5f
    MISSING_TYPE *_completionHandler;	// 1769435999 = 0x6977735f
    MISSING_TYPE *disposeBag;	// 0 = 0x0
    MISSING_TYPE *log;	// 1163157343 = 0x45545f5f
}

+ (id)shared;	// IMP=0x002000000002a130
- (void).cxx_destruct;	// IMP=0x004000000002ccc0
- (void)suspendConnection;	// IMP=0x001000000002cc60
- (void)setupConnection;	// IMP=0x001000000002cb40
- (id)childControllerFor:(long long)arg1 type:(long long)arg2 allowsLandscape:(_Bool)arg3;	// IMP=0x001000000002b530
- (id)init;	// IMP=0x000000000002a850
@property(nonatomic, retain) id delegates; // @synthesize delegates;

@end
