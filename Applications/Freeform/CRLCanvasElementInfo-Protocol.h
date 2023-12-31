//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRLCanvasInfoGeometry;
@protocol CRLCanvasElementInfo;

@protocol CRLCanvasElementInfo <NSObject>
@property(readonly, nonatomic) Class editorClass;
@property(readonly, nonatomic) Class repClass;
@property(readonly, nonatomic) Class layoutClass;
@property(readonly, nonatomic) _Bool isSupported;
@property(readonly, nonatomic) _Bool isSelectable;
@property(nonatomic) __weak id <CRLCanvasElementInfo> parentInfo;
@property(readonly, copy, nonatomic) CRLCanvasInfoGeometry *geometry;
@end

