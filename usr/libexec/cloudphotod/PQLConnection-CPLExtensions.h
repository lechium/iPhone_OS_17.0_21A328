//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <prequelite/PQLConnection.h>

@interface PQLConnection (CPLExtensions)
+ (id)cplInjectionFor:(id)arg1 isNotInIndexSet:(id)arg2;	// IMP=0x0010000000053298
+ (id)cplInjectionFor:(id)arg1 isInIndexSet:(id)arg2;	// IMP=0x0010000000053223
- (_Bool)cplRegisterIndexSetMatch;	// IMP=0x002000000005317d
- (_Bool)cplRegisterDeterministicFunction:(id)arg1 nArgs:(int)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000052f82
- (id)cplFetchObject:(CDUnknownBlockType)arg1 sql:(id)arg2;	// IMP=0x0010000000052ee1
- (id)cplFetchObjectOfClass:(Class)arg1 sql:(id)arg2;	// IMP=0x0010000000052e40
- (id)cplFetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3;	// IMP=0x0010000000052da3
- (id)cplFetch:(id)arg1;	// IMP=0x0010000000052cff
- (_Bool)cplExecute:(id)arg1;	// IMP=0x0010000000052c5b
- (id)lastCPLError;	// IMP=0x0010000000052b8b
@end

