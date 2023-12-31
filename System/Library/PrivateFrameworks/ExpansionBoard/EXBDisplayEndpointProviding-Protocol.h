//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ExpansionBoard/NSObject-Protocol.h>

@class EXBDisplayArrangementItem, FBSDisplayConfigurationRequest, UIRootSceneWindow;
@protocol EXBDisplayEndpointDelegate;

@protocol EXBDisplayEndpointProviding <NSObject>
@property(nonatomic) __weak id <EXBDisplayEndpointDelegate> delegate;
@property(readonly, nonatomic) UIRootSceneWindow *rootWindow;
@property(readonly, nonatomic) unsigned long long currentDeactivationReasons;
@property(readonly, nonatomic) _Bool hasControlOfDisplay;
@property(nonatomic) EXBDisplayArrangementItem *displayArrangementItem;
@property(retain, nonatomic) FBSDisplayConfigurationRequest *displayConfigurationRequest;
@property(readonly, nonatomic) unsigned long long priorityLevel;
@property(nonatomic) _Bool wantsControlOfDisplay;
@end

