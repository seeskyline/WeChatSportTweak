//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GO2OServiceObject.h"

@class NSArray, NSDictionary, NSString;

@interface GO2OCommonBizResponse : GO2OServiceObject
{
    _Bool _success;
    _Bool _titleBarOverlay;
    NSString *_resultCode;
    NSString *_desc;
    NSString *_pageTitle;
    NSString *_titleBarColor;
    NSArray *_titleButtons;
    NSDictionary *_pageData;
    NSArray *_shareInfos;
    NSDictionary *_spmInfos;
    NSDictionary *_blockTemplates;
    NSArray *_blocks;
}

@property(copy, nonatomic) NSArray *blocks; // @synthesize blocks=_blocks;
@property(copy, nonatomic) NSDictionary *blockTemplates; // @synthesize blockTemplates=_blockTemplates;
@property(copy, nonatomic) NSDictionary *spmInfos; // @synthesize spmInfos=_spmInfos;
@property(copy, nonatomic) NSArray *shareInfos; // @synthesize shareInfos=_shareInfos;
@property(copy, nonatomic) NSDictionary *pageData; // @synthesize pageData=_pageData;
@property(copy, nonatomic) NSArray *titleButtons; // @synthesize titleButtons=_titleButtons;
@property(copy, nonatomic) NSString *titleBarColor; // @synthesize titleBarColor=_titleBarColor;
@property(nonatomic) _Bool titleBarOverlay; // @synthesize titleBarOverlay=_titleBarOverlay;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end

