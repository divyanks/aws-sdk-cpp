﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/RecommendationFeedback.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeGuruReviewer
{
namespace Model
{
  class AWS_CODEGURUREVIEWER_API DescribeRecommendationFeedbackResult
  {
  public:
    DescribeRecommendationFeedbackResult();
    DescribeRecommendationFeedbackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRecommendationFeedbackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The recommendation feedback given by the user. </p>
     */
    inline const RecommendationFeedback& GetRecommendationFeedback() const{ return m_recommendationFeedback; }

    /**
     * <p> The recommendation feedback given by the user. </p>
     */
    inline void SetRecommendationFeedback(const RecommendationFeedback& value) { m_recommendationFeedback = value; }

    /**
     * <p> The recommendation feedback given by the user. </p>
     */
    inline void SetRecommendationFeedback(RecommendationFeedback&& value) { m_recommendationFeedback = std::move(value); }

    /**
     * <p> The recommendation feedback given by the user. </p>
     */
    inline DescribeRecommendationFeedbackResult& WithRecommendationFeedback(const RecommendationFeedback& value) { SetRecommendationFeedback(value); return *this;}

    /**
     * <p> The recommendation feedback given by the user. </p>
     */
    inline DescribeRecommendationFeedbackResult& WithRecommendationFeedback(RecommendationFeedback&& value) { SetRecommendationFeedback(std::move(value)); return *this;}

  private:

    RecommendationFeedback m_recommendationFeedback;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
