//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol SBSAContextRepresenting, SBSAPreferencesRepresenting;

@protocol SBSAPreferencesProviding <NSObject>
- (id <SBSAPreferencesRepresenting>)preferencesFromContext:(id <SBSAContextRepresenting>)arg1;
@end
