//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSDJsApi.h"

@class AUToast;

@interface NPJsApiHandler4UploadFile : PSDJsApi
{
    AUToast *_toastView;
}

@property(retain, nonatomic) AUToast *toastView; // @synthesize toastView=_toastView;
- (void).cxx_destruct;
- (id)crateHttpDataWithFormData:(id)arg1;
- (id)createHttpDataWithFilePath:(id)arg1 name:(id)arg2;
- (id)createHttpDataWithFileData:(id)arg1 name:(id)arg2 fileName:(id)arg3;
- (id)createHttpDataWithLocalId:(id)arg1 name:(id)arg2 type:(id)arg3;
- (void)appendNewLineWithBody:(id)arg1;
- (void)uploadFileWithUrl:(id)arg1 headers:(id)arg2 mainUrl:(id)arg3 postData:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handler:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)hideToast;
- (void)showToastWithView:(id)arg1;

@end

