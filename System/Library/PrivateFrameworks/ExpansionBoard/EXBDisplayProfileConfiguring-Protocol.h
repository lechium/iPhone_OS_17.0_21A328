//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ExpansionBoard/NSObject-Protocol.h>

@class FBSSceneSpecification, NSString;

@protocol EXBDisplayProfileConfiguring <NSObject>
- (void)setMainLike:(_Bool)arg1;
- (void)setDeactivationReasonsWhenActive:(unsigned long long)arg1;
- (void)setCloningSupported:(_Bool)arg1;
- (void)deriveWithIdentifier:(NSString *)arg1;
- (void)setPriorityLevel:(unsigned long long)arg1 sceneSpecification:(FBSSceneSpecification *)arg2;
@end

